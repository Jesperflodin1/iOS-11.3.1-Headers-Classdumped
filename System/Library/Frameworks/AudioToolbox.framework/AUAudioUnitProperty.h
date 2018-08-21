/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUAudioUnitProperty : NSObject <NSSecureCoding> {

	NSString* _key;
	unsigned _scope;
	unsigned _element;

}
+(id)propertyWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
+(id)propertyWithKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithKey:(id)arg1 ;
@end

