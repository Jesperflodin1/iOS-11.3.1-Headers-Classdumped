/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARTechnique.h>

@class NSSet;

@interface ARReplayResultDataTechnique : ARTechnique {

	NSSet* _resultDataClasses;
	/*^block*/id _retrieveResultsForTimestampBlock;

}

@property (nonatomic,retain) NSSet * resultDataClasses;                      //@synthesize resultDataClasses=_resultDataClasses - In the implementation block
@property (nonatomic,copy) id retrieveResultsForTimestampBlock;              //@synthesize retrieveResultsForTimestampBlock=_retrieveResultsForTimestampBlock - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(NSSet *)resultDataClasses;
-(void)setResultDataClasses:(NSSet *)arg1 ;
-(void)setRetrieveResultsForTimestampBlock:(id)arg1 ;
-(id)retrieveResultsForTimestampBlock;
@end

