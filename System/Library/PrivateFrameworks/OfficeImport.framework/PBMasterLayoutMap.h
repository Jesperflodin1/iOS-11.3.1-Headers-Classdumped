/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PBMasterLayoutMap : NSObject {

	NSMutableDictionary* mMasterIdToMasterInfoMap;
	NSMutableDictionary* mTitleIdToMasterIdMap;

}
+(id)masterLayoutMap;
-(id)init;
-(void)dealloc;
-(id)slideLayoutForSlideHolder:(id)arg1 ;
-(id)masterInfoForMasterId:(int)arg1 ;
-(int)masterIdForTitleId:(int)arg1 ;
-(id)masterInfoForSlideHolder:(id)arg1 ;
-(void)setMasterInfo:(id)arg1 forMasterId:(int)arg2 ;
-(id)allMasterIds;
-(void)setMasterId:(int)arg1 forTitleId:(int)arg2 ;
@end

