/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>
#import <libobjc.A.dylib/CUTAWDMetric.h>

@class NSString, NSDictionary;

@interface IDSRegistrationCompletedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric> {

	long long _registrationType;
	NSString* _serviceIdentifier;
	BOOL _wasSuccessful;
	long long _registrationError;
	long long _circleStatus;

}

@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned awdIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) PBCodable*<NSCopying> awdRepresentation; 
@property (nonatomic,readonly) long long registrationType;                           //@synthesize registrationType=_registrationType - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier;                         //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL wasSuccessful;                                   //@synthesize wasSuccessful=_wasSuccessful - In the implementation block
@property (nonatomic,readonly) long long registrationError;                          //@synthesize registrationError=_registrationError - In the implementation block
@property (nonatomic,readonly) long long circleStatus;                               //@synthesize circleStatus=_circleStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)registrationError;
-(long long)registrationType;
-(BOOL)wasSuccessful;
-(long long)circleStatus;
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
-(id)initWithRegistrationType:(long long)arg1 serviceIdentifier:(id)arg2 wasSuccessful:(BOOL)arg3 registrationError:(long long)arg4 circleStatus:(long long)arg5 ;
-(NSString *)serviceIdentifier;
@end

