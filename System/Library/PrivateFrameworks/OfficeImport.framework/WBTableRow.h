/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTableRow : NSObject
+(void)readFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 index:(unsigned long long)arg4 row:(id)arg5 ;
+(void)readCellsFrom:(id)arg1 textRuns:(id)arg2 level:(int)arg3 to:(id)arg4 properties:(WrdTableProperties*)arg5 tracked:(WrdTableProperties*)arg6 ;
+(void)collectCellProperties:(WrdTableProperties*)arg1 tracked:(WrdTableProperties*)arg2 for:(id)arg3 ;
@end
