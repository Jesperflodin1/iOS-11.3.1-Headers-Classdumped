/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <libobjc.A.dylib/SAServerBoundCommand.h>

@class NSString, NSDictionary;

@interface CFCLReverseGeoCodeCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * country; 
@property (nonatomic,copy) NSString * locality; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * region; 
@property (nonatomic,copy) NSString * areasOfInterest; 
@property (nonatomic,copy) NSDictionary * address; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)reverseGeoCodeCompleted;
+(id)reverseGeoCodeCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAddress:(NSDictionary *)arg1 ;
-(id)groupIdentifier;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)locality;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)areasOfInterest;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)postalCode;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)region;
-(id)encodedClassName;
-(NSDictionary *)address;
-(void)setAreasOfInterest:(NSString *)arg1 ;
@end
