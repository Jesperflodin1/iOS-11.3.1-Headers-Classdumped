/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface OCXSStream : NSObject {

	NSMutableArray* mLevelStack;

}
-(id)init;
-(void)dealloc;
-(BOOL)hasLevels;
-(int)currentContextDepth;
-(BOOL)popLevel;
-(int)currentContextChildDepth;
-(void)pushLevel:(int)arg1 name:(const char*)arg2 ;
@end

