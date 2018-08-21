/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLLocation, NSString, INImage;


@protocol INRideVehicleExport <NSObject,JSExport>
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,copy) NSString * registrationPlate; 
@property (nonatomic,copy) NSString * manufacturer; 
@property (nonatomic,copy) NSString * model; 
@property (nonatomic,copy) INImage * mapAnnotationImage; 
@required
-(NSString *)manufacturer;
-(void)setManufacturer:(id)arg1;
-(id)init;
-(NSString *)model;
-(CLLocation *)location;
-(void)setLocation:(id)arg1;
-(INImage *)mapAnnotationImage;
-(NSString *)registrationPlate;
-(void)setRegistrationPlate:(id)arg1;
-(void)setMapAnnotationImage:(id)arg1;
-(void)setModel:(id)arg1;

@end
