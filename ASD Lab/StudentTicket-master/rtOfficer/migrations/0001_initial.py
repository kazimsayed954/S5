# Generated by Django 2.2.6 on 2019-11-09 19:56

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='RTOfficer',
            fields=[
                ('officerid', models.IntegerField(primary_key=True, serialize=False)),
                ('firstName', models.CharField(max_length=200)),
                ('lastName', models.CharField(max_length=200)),
                ('email', models.CharField(max_length=50, unique=True)),
                ('city', models.CharField(max_length=200)),
                ('state', models.CharField(max_length=200)),
            ],
        ),
    ]
