/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXSection : NSObject
+(void)initialize;
+(float)scaleFromPrinterSettings:(id)arg1 ;
+(void)readFrom:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
+(void)mapHeader:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(void)mapFooter:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(void)mapPrinterSettings:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(void)mapProperties:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
@end

