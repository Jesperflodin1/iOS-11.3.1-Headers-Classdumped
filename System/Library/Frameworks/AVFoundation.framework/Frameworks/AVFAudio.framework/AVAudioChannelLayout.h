/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVAudioChannelLayout : NSObject <NSSecureCoding> {

	unsigned _layoutTag;
	AudioChannelLayout* _layout;
	void* _reserved;

}

@property (nonatomic,readonly) unsigned layoutTag; 
@property (nonatomic,readonly) const AudioChannelLayout* layout; 
@property (nonatomic,readonly) unsigned channelCount; 
+(id)layoutWithLayoutTag:(unsigned)arg1 ;
+(id)layoutWithLayout:(const AudioChannelLayout*)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithLayoutTag:(unsigned)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(const AudioChannelLayout*)layout;
-(unsigned)layoutTag;
-(unsigned long long)layoutSize;
-(unsigned)channelCount;
-(id)initWithLayout:(const AudioChannelLayout*)arg1 ;
@end

