/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/ODDPoint.h>

@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint {

	ODDPresentationPoint* mParent;
	NSMutableArray* mChildren;

}
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(id)parent;
-(id)children;
-(void)addChild:(id)arg1 order:(unsigned long long)arg2 ;
@end

