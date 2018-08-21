/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetAppsUtilitiesUI/NetAppsUtilitiesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NAUITextStyleDescriptor : NSObject <NSCopying> {

	BOOL _allowsAccessibilitySizes;
	BOOL _allowsSmallSizes;
	unsigned _symbolicTraits;
	NSString* _textStyle;

}

@property (nonatomic,copy,readonly) NSString * textStyle;                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) unsigned symbolicTraits;                    //@synthesize symbolicTraits=_symbolicTraits - In the implementation block
@property (nonatomic,readonly) BOOL allowsAccessibilitySizes;              //@synthesize allowsAccessibilitySizes=_allowsAccessibilitySizes - In the implementation block
@property (nonatomic,readonly) BOOL allowsSmallSizes;                      //@synthesize allowsSmallSizes=_allowsSmallSizes - In the implementation block
+(id)descriptorWithTextStyle:(id)arg1 ;
+(id)fontWithTextStyleDescriptor:(id)arg1 ;
+(id)defaultFontForTextStyleDescriptor:(id)arg1 ;
+(id)na_identity;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)textStyle;
-(unsigned)symbolicTraits;
-(id)initWithTextStyle:(id)arg1 symbolicTraits:(unsigned)arg2 allowsAccessibilitySizes:(BOOL)arg3 allowsSmallSizes:(BOOL)arg4 ;
-(BOOL)allowsAccessibilitySizes;
-(BOOL)allowsSmallSizes;
-(id)descriptorByAddingSymbolicTraits:(unsigned)arg1 removingSymbolicTraits:(unsigned)arg2 ;
-(id)descriptorByDisallowingAccessibilitySizes;
-(id)descriptorByDisallowingSmallSizes;
@end

