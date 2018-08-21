/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class NSString;

@interface TSWPFont : NSObject {

	NSString* _fontName;
	NSString* _compatibilityName;
	NSString* _displayName;
	NSString* _familyName;
	unsigned long long _hash;

}

@property (nonatomic,copy) NSString * fontName;                       //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,copy) NSString * compatibilityName;              //@synthesize compatibilityName=_compatibilityName - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * familyName; 
+(id)fontWithName:(id)arg1 ;
+(id)fontWithName:(id)arg1 compatibilityName:(id)arg2 ;
+(BOOL)isKeyValueProxyLeafType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)fontName;
-(NSString *)familyName;
-(void)setFontName:(NSString *)arg1 ;
-(NSString *)displayName;
-(NSString *)compatibilityName;
-(id)initWithFontName:(id)arg1 compatibilityName:(id)arg2 ;
-(void)setCompatibilityName:(NSString *)arg1 ;
-(id)initWithFontName:(id)arg1 ;
@end
