build:
	gcc -o app main.c

test:
	gcc -o resultat_test_addition test_addition.c addition.c
	./resultat_test_addition

deploy:
	# Opérations spécifiques de déploiement
	mkdir -p deploy
	gcc -o deploy/app main.c
	tar -czvf deploy/app.tar.gz deploy/app
	
clean:
	rm -f app resultat_test_addition