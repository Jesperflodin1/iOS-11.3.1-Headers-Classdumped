/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDDocument, NSMutableDictionary;

@interface WDCitationTable : NSObject {

	WDDocument* mDocument;
	NSMutableDictionary* mCitations;

}
-(unsigned long long)count;
-(void)dealloc;
-(id)description;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(id)citationFor:(id)arg1 ;
-(void)addCitation:(id)arg1 forID:(id)arg2 ;
-(id)citationIDs;
@end
