/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBTextBlock : NSObject
+(void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3 ;
+(void)applyTextRuler:(PptTextRulerAtom*)arg1 toTextBlock:(id)arg2 ;
+(void)readFromTextBlock:(id)arg1 toStyledText:(CFAttributedStringRef)arg2 ;
+(void)readFromStyledText:(CFAttributedStringRef)arg1 toStyledPargraphs:(CFArrayRef)arg2 ;
+(void)readParagraph:(id)arg1 paragraph:(CFAttributedStringRef)arg2 textType:(int)arg3 state:(id)arg4 ;
@end

