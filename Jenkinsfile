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
        stage('Deploy') {
            steps {
                // Étapes de déploiement du code
                sh 'make deploy'
            }
        }
    }
}
