/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {

	AVPlayerItemOutputInternal* _outputInternal;

}

@property (assign,nonatomic) BOOL suppressesPlayerRendering; 
-(id)_weakReference;
-(BOOL)suppressesPlayerRendering;
-(OpaqueCMTimebaseRef)_copyTimebase;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_detachFromPlayerItem;
-(SCD_Struct_AV2)_itemTimeForHostTimeAsCMTime:(SCD_Struct_AV2)arg1 ;
-(SCD_Struct_AV2)itemTimeForHostTime:(double)arg1 ;
-(SCD_Struct_AV2)itemTimeForMachAbsoluteTime:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(void)finalize;
@end

