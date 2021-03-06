/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, NSMutableString;

@interface WDCharacterRun : WDRun {

	WDCharacterProperties* mProperties;
	NSMutableString* mString;
	BOOL mBinaryWriterContentFlag;

}
-(void)dealloc;
-(id)description;
-(void)appendString:(id)arg1 ;
-(BOOL)isEmpty;
-(id)string;
-(void)setString:(id)arg1 ;
-(id)properties;
-(int)runType;
-(BOOL)binaryWriterContentFlag;
-(void)setBinaryWriterContentFlag:(BOOL)arg1 ;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(void)copyPropertiesFrom:(id)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(void)setPropertiesForDocument;
-(void)clearString;
-(id)initWithParagraph:(id)arg1 string:(id)arg2 ;
-(void)clearProperties;
@end

