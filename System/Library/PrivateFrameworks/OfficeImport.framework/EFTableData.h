/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EDTable, EDReference;

@interface EFTableData : NSObject {

	EFRefTok mRefTok;
	EDTable* mTable;
	EDReference* mReference;
	int mMakeups;

}
-(void)dealloc;
-(id)table;
-(id)reference;
-(unsigned short*)ptgData;
-(id)initWith:(EFStrTok*)arg1 ;
-(const EFRefTok*)refTok;
-(void)makeup:(id)arg1 with:(int)arg2 ;
@end

