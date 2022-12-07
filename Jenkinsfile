pipeline {
  agent any
  options {
    timestamps()
  }
  stages {
    stage('compile') {
      steps {
        sh 'make'
      }
      post {
        success {
          archiveArtifacts artifacts: '*.o', fingerprint: true
        }
      }
    }
    stage('take for a spin') {
      steps {
        sh './reverseInt.o 1234'
      }
    }
  }
}
