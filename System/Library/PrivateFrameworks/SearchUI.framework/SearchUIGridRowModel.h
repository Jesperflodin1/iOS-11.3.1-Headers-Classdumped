/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionRowModel.h>

@class SearchUIGridLayoutManager;

@interface SearchUIGridRowModel : SearchUICardSectionRowModel {

	SearchUIGridLayoutManager* _gridLayoutManager;

}

@property (retain) SearchUIGridLayoutManager * gridLayoutManager;              //@synthesize gridLayoutManager=_gridLayoutManager - In the implementation block
-(void)setGridLayoutManager:(SearchUIGridLayoutManager *)arg1 ;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 gridLayoutManager:(id)arg3 ;
-(SearchUIGridLayoutManager *)gridLayoutManager;
@end

