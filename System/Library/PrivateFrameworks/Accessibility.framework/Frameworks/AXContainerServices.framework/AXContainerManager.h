/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXContainerServices.framework/AXContainerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXUIClient;

@interface AXContainerManager : NSObject {

	AXUIClient* _containerServerClient;

}

@property (nonatomic,retain) AXUIClient * containerServerClient;              //@synthesize containerServerClient=_containerServerClient - In the implementation block
+(id)sharedManager;
-(AXUIClient *)containerServerClient;
-(void)writeData:(id)arg1 toFileAtAccessibilityContainerPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteFileAtAccessibilityContainerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContainerServerClient:(AXUIClient *)arg1 ;
-(void)readDataForFileAtAccessibilityContainerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
