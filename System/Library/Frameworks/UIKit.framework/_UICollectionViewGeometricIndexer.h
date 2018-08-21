/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableDictionary;

@interface _UICollectionViewGeometricIndexer : NSObject {

	NSMutableDictionary* _pages;
	double _pageDimension;
	int _axis;

}
+(id)geometricIndexerWithContainerSize:(CGSize)arg1 axis:(int)arg2 ;
-(void)addGlobalIndex:(long long)arg1 forFrame:(CGRect)arg2 ;
-(id)globalIndexesOfFramesIntersectingRect:(CGRect)arg1 ;
-(id)initWithContainerSize:(CGSize)arg1 axis:(int)arg2 ;
-(id)_mutableIndexSetForPageIndex:(long long)arg1 ;
@end

