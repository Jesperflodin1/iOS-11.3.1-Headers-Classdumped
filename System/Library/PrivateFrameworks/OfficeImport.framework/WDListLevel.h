/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDDocument, WDParagraphProperties, WDCharacterProperties, WDOfficeArt, NSMutableString;

@interface WDListLevel : NSObject {

	WDDocument* mDocument;
	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDOfficeArt* mImage;
	long long mStartNumber;
	int mNumberFormat;
	BOOL mRestartNumbering;
	long long mRestartLevel;
	BOOL mLegal;
	int mSuffix;
	NSMutableString* mText;
	BOOL mLegacy;
	long long mLegacySpace;
	long long mLegacyIndent;
	int mJustification;

}
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)image;
-(id)initWithDocument:(id)arg1 ;
-(void)setLegacy:(BOOL)arg1 ;
-(id)paragraphProperties;
-(void)setNumberFormat:(int)arg1 ;
-(int)numberFormat;
-(id)characterProperties;
-(int)justification;
-(long long)startNumber;
-(BOOL)restartLevelOverridden;
-(long long)restartLevel;
-(void)setRestartNumbering:(BOOL)arg1 ;
-(void)setLegal:(BOOL)arg1 ;
-(void)setLegacySpace:(long long)arg1 ;
-(void)setLegacyIndent:(long long)arg1 ;
-(BOOL)restartNumbering;
-(BOOL)legal;
-(int)suffix;
-(void)setStartNumber:(long long)arg1 ;
-(void)setJustification:(int)arg1 ;
-(void)setSuffix:(int)arg1 ;
-(BOOL)startNumberOverridden;
-(BOOL)numberFormatOverridden;
-(BOOL)imageBullet;
-(BOOL)imageBulletOverridden;
-(BOOL)restartNumberingOverridden;
-(void)setRestartLevel:(long long)arg1 ;
-(BOOL)legalOverridden;
-(BOOL)suffixOverridden;
-(BOOL)textOverridden;
-(BOOL)legacy;
-(long long)legacySpace;
-(long long)legacyIndent;
-(BOOL)justificationOverridden;
@end

