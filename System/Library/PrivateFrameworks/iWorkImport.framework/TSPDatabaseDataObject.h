/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class TSPData;

@interface TSPDatabaseDataObject : TSPObject {

	TSPData* _data;

}

@property (nonatomic,readonly) TSPData * data;              //@synthesize data=_data - In the implementation block
-(void)loadFromUnarchiver:(id)arg1 ;
-(TSPData *)data;
@end

