/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCHCustomDataFormatter.h>

@class NSString;

@interface TSCHPrefixSuffixCustomDataFormatter : TSCHCustomDataFormatter {

	NSString* mPrefixString;
	NSString* mSuffixString;

}
+(id)dataFormatterWithCustomFormat:(id)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3 prefixString:(id)arg4 suffixString:(id)arg5 ;
-(id)convertToPersistableStyleObject;
-(id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2 ;
-(id)convertToSupportedClientFormatObjectWithLocale:(id)arg1 ;
-(id)initWithCustomFormat:(id)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3 prefixString:(id)arg4 suffixString:(id)arg5 ;
-(id)p_formattedStringWithBodyString:(id)arg1 ;
-(void)dealloc;
@end

