/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUFormatObject.h>
#import <iWorkImport/TSCHCustomFormatUpdateSupport.h>

@interface TSUMutableFormatObject : TSUFormatObject <TSCHCustomFormatUpdateSupport>

@property (assign,nonatomic) SCD_Struct_TS217 formatStruct; 
-(void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg1 ;
-(void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2 ;
-(void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFormatStruct:(SCD_Struct_TS217)arg1 ;
@end

