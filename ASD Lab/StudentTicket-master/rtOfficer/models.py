from django.db import models

# Create your models here.
class RTOfficer(models.Model):
    officerid = models.IntegerField(primary_key=True)
    firstName = models.CharField(max_length=200)
    lastName = models.CharField(max_length=200)
    email = models.CharField(max_length=50, unique=True)
    city = models.CharField(max_length=200)
    state = models.CharField(max_length=200)






    def __str__(self):
        return self.firstName + " " + self.lastName