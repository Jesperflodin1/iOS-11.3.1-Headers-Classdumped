/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXText : NSObject
+(void)readFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readFromStream:(xmlTextReaderRef)arg1 state:(id)arg2 ;
+(void)readFrom:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromStream:(xmlTextReaderRef)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)updateTextBoxIdsFromState:(id)arg1 ;
+(void)createChildren:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)createChildrenFromStream:(xmlTextReaderRef)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromString:(id)arg1 to:(id)arg2 ;
+(id)addNewSectionTo:(id)arg1 state:(id)arg2 ;
+(void)readFromParagraph:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromTable:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
@end

