/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLMutableCameraImportQueue : NSObject {

	NSMutableArray* _items;

}
-(id)init;
-(id)description;
-(id)currentItem;
-(void)enqueueImportItem:(id)arg1 ;
-(void)dequeueImportItem;
@end

