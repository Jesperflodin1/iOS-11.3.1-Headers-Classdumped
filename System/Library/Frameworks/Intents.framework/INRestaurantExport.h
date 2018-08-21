/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLLocation, NSString;


@protocol INRestaurantExport <NSObject,JSExport>
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * vendorIdentifier; 
@property (nonatomic,copy) NSString * restaurantIdentifier; 
@required
-(id)init;
-(void)setName:(id)arg1;
-(NSString *)name;
-(CLLocation *)location;
-(void)setLocation:(id)arg1;
-(NSString *)restaurantIdentifier;
-(void)setRestaurantIdentifier:(id)arg1;
-(NSString *)vendorIdentifier;
-(void)setVendorIdentifier:(id)arg1;

@end

