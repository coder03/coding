    #include <iostream>
    #include <pthread.h>
     
    pthread_mutex_t mtx;
    pthread_cond_t cond1;
     
    volatile bool isOdd = false;
     
    void *PrintEven(void *args)
    {
    	for(int i=0;i<12;i+=2) {
    		pthread_mutex_lock(&mtx);
    		while(isOdd) {
    			pthread_cond_wait(&cond1, &mtx);
    		}
    		std::cout<<i<<std::endl;
    		isOdd = true;
    		pthread_mutex_unlock(&mtx);
    		pthread_cond_signal(&cond1);
    	}
    	return NULL;
    }
     
    void *PrintOdd(void *args)
    {
    	for(int i=1;i<13;i+=2) {
    		pthread_mutex_lock(&mtx);
    		while(!isOdd) {
    			pthread_cond_wait(&cond1, &mtx);
    		};
    		std::cout<<i<<std::endl;
    		isOdd = false;
    		pthread_mutex_unlock(&mtx);
    		pthread_cond_signal(&cond1);
    	}
    	return NULL;
    }
     
    int main()
    {
    	pthread_t t1, t2;
    	pthread_mutex_init(&mtx, NULL);
    	pthread_cond_init(&cond1, NULL);
     
    	pthread_create(&t1, NULL, &PrintOdd, NULL);
    	pthread_create(&t2, NULL, &PrintEven, NULL);
     
    	pthread_join(t1, NULL);
    	pthread_join(t2, NULL);
     
    	pthread_cond_destroy(&cond1);
    	pthread_mutex_destroy(&mtx);
     
    	return 0;
    }
