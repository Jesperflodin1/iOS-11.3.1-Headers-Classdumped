/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextDropRequest.h>
@class UITextPosition, UITextDropProposal;


@protocol UITextDropRequest <NSObject>
@property (nonatomic,readonly) UITextPosition * dropPosition; 
@property (nonatomic,readonly) UITextDropProposal * suggestedProposal; 
@property (getter=isSameView,nonatomic,readonly) BOOL sameView; 
@property (nonatomic,readonly) id<UIDropSession> dropSession; 
@required
-(id<UIDropSession>)dropSession;
-(UITextPosition *)dropPosition;
-(UITextDropProposal *)suggestedProposal;
-(BOOL)isSameView;

@end


@protocol UIDropSession;
@class UITextPosition, UITextDropProposal, NSString;

@interface UITextDropRequest : NSObject <UITextDropRequest> {

	BOOL _sameView;
	id<UIDropSession> _dropSession;
	UITextPosition* _dropPosition;
	UITextDropProposal* _suggestedProposal;

}

@property (nonatomic,retain) UITextDropProposal * suggestedProposal;              //@synthesize suggestedProposal=_suggestedProposal - In the implementation block
@property (assign,getter=isSameView,nonatomic) BOOL sameView;                     //@synthesize sameView=_sameView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITextPosition * dropPosition;                     //@synthesize dropPosition=_dropPosition - In the implementation block
@property (nonatomic,readonly) id<UIDropSession> dropSession;                     //@synthesize dropSession=_dropSession - In the implementation block
-(id<UIDropSession>)dropSession;
-(void)setSuggestedProposal:(UITextDropProposal *)arg1 ;
-(id)initWithPosition:(id)arg1 inSession:(id)arg2 ;
-(void)setSameView:(BOOL)arg1 ;
-(UITextPosition *)dropPosition;
-(UITextDropProposal *)suggestedProposal;
-(BOOL)isSameView;
@end

