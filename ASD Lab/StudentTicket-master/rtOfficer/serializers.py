from rest_framework import serializers
from . models import RTOfficer

class RTOfficerSerializer(serializers.ModelSerializer):
    class Meta :
     model = RTOfficer
     fields= '__all__'
