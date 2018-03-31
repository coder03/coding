# creat thumb version of pix in director images to thumb
# wont work coz the command "convert" is not installed.
FILES = $(shell  find images -type f -iname "*.jpg" | sed 's/images/thumb/g')
CONVERT_CMD = convert -resize "100x100" $< $@
MSG = @echo "\nUpdating thumbnail" $@
 
all: ${FILES}
thumb/%.jpg: images/%.jpg
	$(MSG)
	$(CONVERT_CMD)
thumb/%.JPG: images/%.JPG
	$(MSG)
	$(CONVERT_CMD)
clean:
	@echo Cleaning up files..
	rm -rf thumb/*.jpg thumb/*.JPG
