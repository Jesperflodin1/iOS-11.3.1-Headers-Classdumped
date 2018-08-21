/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSNumber, SASRecordingInfo;

@interface SASUpdateAudioInfo : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * audioSource; 
@property (assign,nonatomic) int codec; 
@property (nonatomic,copy) NSString * deviceIdentifier; 
@property (nonatomic,copy) NSString * deviceModel; 
@property (nonatomic,copy) NSString * dspStatus; 
@property (nonatomic,copy) NSString * firmwareVersion; 
@property (nonatomic,copy) NSString * headsetAddress; 
@property (nonatomic,copy) NSString * headsetId; 
@property (nonatomic,copy) NSString * headsetName; 
@property (nonatomic,copy) NSNumber * noiseReductionLevel; 
@property (nonatomic,copy) NSString * origin; 
@property (nonatomic,copy) NSString * productId; 
@property (nonatomic,retain) SASRecordingInfo * recordingInfo; 
@property (assign,nonatomic) BOOL triggeredTwoShotBorealis; 
@property (nonatomic,copy) NSString * vendorId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)updateAudioInfo;
+(id)updateAudioInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)vendorId;
-(void)setVendorId:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(NSString *)origin;
-(void)setOrigin:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setAudioSource:(NSString *)arg1 ;
-(NSString *)dspStatus;
-(void)setDspStatus:(NSString *)arg1 ;
-(NSString *)headsetAddress;
-(void)setHeadsetAddress:(NSString *)arg1 ;
-(NSString *)headsetId;
-(void)setHeadsetId:(NSString *)arg1 ;
-(NSString *)headsetName;
-(void)setHeadsetName:(NSString *)arg1 ;
-(NSNumber *)noiseReductionLevel;
-(void)setNoiseReductionLevel:(NSNumber *)arg1 ;
-(SASRecordingInfo *)recordingInfo;
-(NSString *)productId;
-(void)setProductId:(NSString *)arg1 ;
-(void)setRecordingInfo:(SASRecordingInfo *)arg1 ;
-(BOOL)triggeredTwoShotBorealis;
-(void)setTriggeredTwoShotBorealis:(BOOL)arg1 ;
-(void)setCodec:(int)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(NSString *)firmwareVersion;
-(int)codec;
-(NSString *)audioSource;
@end

