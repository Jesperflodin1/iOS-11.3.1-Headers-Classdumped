/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Haptics.framework/Haptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HAButtonHapticsLoader : NSObject

@property (nonatomic,readonly) long long maxNumberOfSlots; 
@property (nonatomic,readonly) BOOL serviceAvailable; 
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)hapticAssetType:(long long)arg1 hasAudio:(BOOL*)arg2 hasHaptic:(BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)loadButtonHapticOfType:(long long)arg1 withParameters:(id)arg2 atSlot:(long long)arg3 error:(id*)arg4 ;
-(BOOL)serviceAvailable;
-(long long)maxNumberOfSlots;
-(BOOL)loadButtonHapticOfType:(long long)arg1 atSlot:(long long)arg2 error:(id*)arg3 ;
-(float)defaultDownGainForType:(long long)arg1 ;
-(float)defaultUpGainForType:(long long)arg1 ;
-(float)hapticGainForType:(long long)arg1 ;
-(float)audioGainForType:(long long)arg1 ;
@end
