/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TNPageController, TSDDrawableInfo, TNPageCoordinateDictionary;

@interface TNHintCache : NSObject {

	TNPageController* mPageController;
	TSDDrawableInfo* mInfo;
	TSCERangeCoordinate mPageRange;
	BOOL mIsMaxColumnValid;
	BOOL mIsMaxRowValid;
	TNPageCoordinateDictionary* mHintCacheEntryDictionary;

}

@property (retain) TSDDrawableInfo * info; 
@property (readonly) TNPageController * pageController; 
-(id)p_hintCacheEntryAtCoordinate:(TSUCellCoord)arg1 ;
-(id)initWithInfo:(id)arg1 pageController:(id)arg2 ;
-(TSCERangeCoordinate)pageRangeWithUpperBound:(TSUCellCoord)arg1 ;
-(id)layoutAtCoordinate:(TSUCellCoord)arg1 parentLayout:(id)arg2 ;
-(void)invalidate;
-(void)dealloc;
-(TSDDrawableInfo *)info;
-(TNPageController *)pageController;
-(void)setInfo:(TSDDrawableInfo *)arg1 ;
@end

