/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSMutableArray, NSDate, NSArray, AXHearingAidMode;


@protocol AXHADeviceProtocol <NSObject>
@property (nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,readonly) BOOL isConnecting; 
@property (assign,nonatomic) BOOL keepInSync; 
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSMutableArray * manufacturer; 
@property (nonatomic,retain,readonly) NSMutableArray * model; 
@property (nonatomic,retain,readonly) NSString * leftFirmwareVersion; 
@property (nonatomic,retain,readonly) NSString * rightFirmwareVersion; 
@property (nonatomic,retain,readonly) NSString * leftHardwareVersion; 
@property (nonatomic,retain,readonly) NSString * rightHardwareVersion; 
@property (assign,nonatomic) int availableEars; 
@property (nonatomic,retain,readonly) NSString * rightUUID; 
@property (nonatomic,retain,readonly) NSString * leftUUID; 
@property (nonatomic,retain,readonly) NSString * leftPeripheralUUID; 
@property (nonatomic,retain,readonly) NSString * rightPeripheralUUID; 
@property (assign,nonatomic) double rightMicrophoneVolume; 
@property (assign,nonatomic) double leftMicrophoneVolume; 
@property (assign,nonatomic) double rightStreamVolume; 
@property (assign,nonatomic) double leftStreamVolume; 
@property (assign,nonatomic) double rightSensitivity; 
@property (assign,nonatomic) double leftSensitivity; 
@property (assign,nonatomic) double rightMixedVolume; 
@property (assign,nonatomic) double leftMixedVolume; 
@property (assign,nonatomic) char rightTreble; 
@property (assign,nonatomic) char leftTreble; 
@property (assign,nonatomic) char rightBass; 
@property (assign,nonatomic) char leftBass; 
@property (nonatomic,readonly) double rightBatteryLevel; 
@property (nonatomic,readonly) double leftBatteryLevel; 
@property (nonatomic,retain,readonly) NSDate * leftBatteryLowDate; 
@property (nonatomic,retain,readonly) NSDate * rightBatteryLowDate; 
@property (nonatomic,readonly) short leftMicrophoneVolumeSteps; 
@property (nonatomic,readonly) short rightMicrophoneVolumeSteps; 
@property (nonatomic,readonly) short leftStreamVolumeSteps; 
@property (nonatomic,readonly) short rightStreamVolumeSteps; 
@property (nonatomic,readonly) short leftSensitivitySteps; 
@property (nonatomic,readonly) short rightSensitivitySteps; 
@property (nonatomic,readonly) short leftMixedVolumeSteps; 
@property (nonatomic,readonly) short rightMixedVolumeSteps; 
@property (nonatomic,readonly) BOOL supportsBinauralStreaming; 
@property (nonatomic,readonly) BOOL supportsCombinedPresets; 
@property (nonatomic,readonly) BOOL supportsCombinedVolumes; 
@property (nonatomic,copy,readonly) NSArray * rightPrograms; 
@property (nonatomic,copy,readonly) NSArray * leftPrograms; 
@property (nonatomic,retain,readonly) AXHearingAidMode * leftSelectedProgram; 
@property (nonatomic,retain,readonly) AXHearingAidMode * rightSelectedProgram; 
@property (nonatomic,retain,readonly) AXHearingAidMode * leftSelectedStreamingProgram; 
@property (nonatomic,retain,readonly) AXHearingAidMode * rightSelectedStreamingProgram; 
@property (nonatomic,retain,readonly) NSString * deviceUUID; 
@required
-(BOOL)hasConnection;
-(double)leftBatteryLevel;
-(double)rightBatteryLevel;
-(NSMutableArray *)manufacturer;
-(BOOL)isConnected;
-(NSString *)name;
-(NSMutableArray *)model;
-(void)connect;
-(id)valueForProperty:(unsigned long long)arg1;
-(int)availableEars;
-(BOOL)leftAvailable;
-(BOOL)rightAvailable;
-(AXHearingAidMode *)leftSelectedProgram;
-(AXHearingAidMode *)rightSelectedProgram;
-(id)selectedPrograms;
-(AXHearingAidMode *)leftSelectedStreamingProgram;
-(AXHearingAidMode *)rightSelectedStreamingProgram;
-(NSArray *)leftPrograms;
-(NSArray *)rightPrograms;
-(void)selectProgram:(id)arg1 forEar:(int)arg2;
-(void)setAvailableEars:(int)arg1;
-(NSString *)leftUUID;
-(NSString *)rightUUID;
-(short)leftMixedVolumeSteps;
-(short)rightMixedVolumeSteps;
-(short)leftMicrophoneVolumeSteps;
-(short)rightMicrophoneVolumeSteps;
-(short)leftStreamVolumeSteps;
-(short)rightStreamVolumeSteps;
-(short)leftSensitivitySteps;
-(short)rightSensitivitySteps;
-(BOOL)supportsCombinedVolumes;
-(BOOL)supportsCombinedPresets;
-(id)programs;
-(BOOL)didLoadRequiredProperties;
-(void)loadRequiredProperties;
-(void)setLeftTreble:(char)arg1;
-(void)setRightTreble:(char)arg1;
-(void)setLeftBass:(char)arg1;
-(void)setRightBass:(char)arg1;
-(double)leftMicrophoneVolume;
-(double)rightMicrophoneVolume;
-(double)leftStreamVolume;
-(double)rightStreamVolume;
-(NSString *)leftFirmwareVersion;
-(NSString *)rightFirmwareVersion;
-(NSString *)leftHardwareVersion;
-(NSString *)rightHardwareVersion;
-(NSDate *)leftBatteryLowDate;
-(NSDate *)rightBatteryLowDate;
-(double)leftSensitivity;
-(double)rightSensitivity;
-(double)leftMixedVolume;
-(double)rightMixedVolume;
-(BOOL)supportsBinauralStreaming;
-(id)initWithPersistentRepresentation:(id)arg1;
-(void)disconnectAndUnpair:(BOOL)arg1;
-(BOOL)containsPeripheralWithUUID:(id)arg1;
-(BOOL)didLoadBasicProperties;
-(id)selectedProgramIndexes;
-(BOOL)keepInSync;
-(void)setKeepInSync:(BOOL)arg1;
-(NSString *)leftPeripheralUUID;
-(NSString *)rightPeripheralUUID;
-(void)setRightMicrophoneVolume:(double)arg1;
-(void)setLeftMicrophoneVolume:(double)arg1;
-(void)setRightStreamVolume:(double)arg1;
-(void)setLeftStreamVolume:(double)arg1;
-(void)setRightSensitivity:(double)arg1;
-(void)setLeftSensitivity:(double)arg1;
-(void)setRightMixedVolume:(double)arg1;
-(void)setLeftMixedVolume:(double)arg1;
-(char)rightTreble;
-(char)leftTreble;
-(char)rightBass;
-(char)leftBass;
-(NSString *)deviceUUID;
-(void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
-(BOOL)isPaired;
-(BOOL)isConnecting;

@end

