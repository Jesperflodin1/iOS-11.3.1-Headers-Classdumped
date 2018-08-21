/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSUUID, NSString, NSDate, NSData, NSDictionary;

@interface HKHealthWrapMessageConfiguration : NSObject {

	BOOL _disableCompression;
	NSUUID* _subjectUUID;
	NSUUID* _studyUUID;
	NSString* _channel;
	NSString* _payloadType;
	SecCertificateRef _certificate;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _payloadIdentifier;
	NSData* _applicationData;
	NSDictionary* _keyValuePairs;

}

@property (nonatomic,copy,readonly) NSUUID * subjectUUID;                  //@synthesize subjectUUID=_subjectUUID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * studyUUID;                    //@synthesize studyUUID=_studyUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * channel;                    //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSString * payloadType;                         //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,readonly) SecCertificateRef certificate;              //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSString * payloadIdentifier;                   //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,retain) NSData * applicationData;                     //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,retain) NSDictionary * keyValuePairs;                 //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
@property (assign,nonatomic) BOOL disableCompression;                      //@synthesize disableCompression=_disableCompression - In the implementation block
-(void)setPayloadType:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)channel;
-(id)initWithSubjectUUID:(id)arg1 studyUUID:(id)arg2 channel:(id)arg3 payloadType:(id)arg4 certificate:(SecCertificateRef)arg5 ;
-(NSUUID *)subjectUUID;
-(NSUUID *)studyUUID;
-(NSString *)payloadIdentifier;
-(BOOL)disableCompression;
-(void)setDisableCompression:(BOOL)arg1 ;
-(void)setApplicationData:(NSData *)arg1 ;
-(SecCertificateRef)certificate;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDictionary *)keyValuePairs;
-(void)setKeyValuePairs:(NSDictionary *)arg1 ;
-(id)initWithChannel:(id)arg1 payloadType:(id)arg2 certificate:(SecCertificateRef)arg3 ;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSString *)payloadType;
-(NSData *)applicationData;
@end

