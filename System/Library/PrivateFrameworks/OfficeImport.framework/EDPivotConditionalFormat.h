/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {

	unsigned long long mPriority;
	int mType;
	int mScope;
	EDCollection* mPivotAreas;

}
+(id)pivotConditionalFormat;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
-(void)setScope:(int)arg1 ;
-(int)scope;
-(id)pivotAreas;
@end
