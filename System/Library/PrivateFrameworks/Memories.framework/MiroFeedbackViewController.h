/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class MiroMovie;

@interface MiroFeedbackViewController : UIViewController {

	/*^block*/id _completion;
	MiroMovie* _tapToRadarMovie;

}

@property (nonatomic,copy) id completion;                              //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) MiroMovie * tapToRadarMovie;              //@synthesize tapToRadarMovie=_tapToRadarMovie - In the implementation block
-(void)didReceiveMemoryWarning;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)viewDidLoad;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(MiroMovie *)tapToRadarMovie;
-(void)cancelAction:(id)arg1 ;
-(void)tapToRadarAction:(id)arg1 ;
-(void)setTapToRadarMovie:(MiroMovie *)arg1 ;
@end

