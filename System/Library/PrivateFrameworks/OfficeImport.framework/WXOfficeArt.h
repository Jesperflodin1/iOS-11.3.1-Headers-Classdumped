/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXOfficeArt : NSObject
+(void)initialize;
+(void)readFrom:(xmlNode*)arg1 parentRElement:(xmlNode*)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5 ;
+(void)readOAX:(xmlNode*)arg1 parentRElement:(xmlNode*)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5 ;
+(void)readVml:(xmlNode*)arg1 parentRElement:(xmlNode*)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5 ;
+(void)readClientData:(xmlNode*)arg1 state:(id)arg2 to:(id)arg3 ;
+(void)readPosition:(xmlNode*)arg1 state:(id)arg2 to:(id)arg3 isHorizontal:(BOOL)arg4 ;
+(void)readWrap:(xmlNode*)arg1 state:(id)arg2 to:(id)arg3 ;
+(void)readWrapDistance:(xmlNode*)arg1 parentElement:(xmlNode*)arg2 state:(id)arg3 to:(id)arg4 ;
+(void)writeWrapText:(id)arg1 to:(id)arg2 ;
+(void)writeWrapLeftDistance:(id)arg1 to:(id)arg2 ;
+(void)writeWrapRightDistance:(id)arg1 to:(id)arg2 ;
+(void)writeWrapPolygonChildren:(id)arg1 to:(id)arg2 ;
+(void)writeWrapTopDistance:(id)arg1 to:(id)arg2 ;
+(void)writeWrapBottomDistance:(id)arg1 to:(id)arg2 ;
+(BOOL)writeWrapTightlyWith:(id)arg1 toWriter:(id)arg2 ;
@end

