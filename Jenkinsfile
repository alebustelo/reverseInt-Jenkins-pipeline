pipeline {
  agent any
  stages {
    stage('compile') {
      steps {
        sh 'make'
      }
    }
    stage('take for a spin') {
      steps {
        sh './reverseInt.o 1234'
      }
    }
  }
}
