/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigRoutingContextFactory.h>

@class NSString;

@interface AVRemoteFigRoutingContextFactory : NSObject <AVFigRoutingContextFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(OpaqueFigRoutingContextRef)createControlChannelOnlyContextWithAllocator:(CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 ;
-(OpaqueFigRoutingContextRef)createAudioContextWithAllocator:(CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 ;
-(OpaqueFigRoutingContextRef)createVideoContextWithAllocator:(CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 ;
-(OpaqueFigRoutingContextRef)createPerAppSecondDisplayContextWithAllocator:(CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 ;
-(OpaqueFigRoutingContextRef)copySystemAudioContextWithAllocator:(CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 ;
-(OpaqueFigRoutingContextRef)copySystemMirroringContextWithAllocator:(CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 ;
-(OpaqueFigRoutingContextRef)copySystemMusicContextWithAllocator:(CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 ;
-(OpaqueFigRoutingContextRef)createRemoteMusicControllerContextWithAllocator:(CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 ;
-(OpaqueFigRoutingContextRef)copyDisplayMenuVideoContextWithAllocator:(CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 ;
-(OpaqueFigRoutingContextRef)copyContextForUUIDWithAllocator:(CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 ;
@end

