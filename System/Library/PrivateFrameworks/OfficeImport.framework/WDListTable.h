/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDDocument, NSMutableArray, NSMutableDictionary, WDList;

@interface WDListTable : NSObject {

	WDDocument* mDocument;
	NSMutableArray* mLists;
	NSMutableDictionary* mListMapById;
	WDList* mNullList;
	WDList* mDefaultList;

}
-(void)dealloc;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(id)listWithListId:(int)arg1 ;
-(id)lists;
-(id)addListWithListId:(int)arg1 listDefinitionId:(int)arg2 ;
-(unsigned long long)listCount;
-(id)listAt:(unsigned long long)arg1 ;
@end

