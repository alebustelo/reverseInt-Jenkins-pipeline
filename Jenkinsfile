pipeline {
  agent any
  stages {
    stage('compile') {
      steps {
        sh 'g++ -o reverseInt.o reverseInt.cpp'
      }
    }
    stage('take for a spin') {
      steps {
        sh './reverseInt.o 1234'
      }
    }
  }
}
