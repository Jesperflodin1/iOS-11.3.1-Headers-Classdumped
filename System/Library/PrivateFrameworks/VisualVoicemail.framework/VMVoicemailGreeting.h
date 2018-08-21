/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface VMVoicemailGreeting : NSObject <NSSecureCoding> {

	double _duration;
	unsigned long long _type;
	NSURL* _url;

}

@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * url;                          //@synthesize url=_url - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(double)duration;
-(NSURL *)url;
-(void)setDuration:(double)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setUrl:(NSURL *)arg1 ;
@end

