pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                // Étapes de construction du code source
                sh 'make build'
            }
        }
        stage('Test') {
            steps {
                // Étapes d'exécution des tests unitaires
                sh 'make test'
            }
        }
        /*stage('Delivery') {
            steps {
                // Livraison du code; construction de l'image
                sh 'docker build -t my_app .'
            }
        }*/
        stage('Deploy') {
            steps {
                // Déploiement du code; ici, on lance juste le conteneur localement
                // sh 'docker run my_app'
                sh 'make deploy'
            }
        }
    }
}
