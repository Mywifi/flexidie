//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"
//
//#import "SCCaptionConfigDelegate.h"
//#import "SCCaptionDelegate.h"

@class NSArray, NSString, SCCaption;

@interface SCCaptionManager : NSObject //<SCCaptionDelegate, SCCaptionConfigDelegate>
{
    BOOL _tempEditing;
    BOOL _tempHidden;
//    id <SCCaptionManagerDelegate> _delegate;
    float _tempLastVertical;
    SCCaption *_caption;
    int _currentModeIndex;
    NSArray *_captionModes;
    int _tempOrientation;
    NSString *_tempText;
    struct CGRect _superviewFrame;
}

@property(copy, nonatomic) NSString *tempText; // @synthesize tempText=_tempText;
@property(nonatomic) int tempOrientation; // @synthesize tempOrientation=_tempOrientation;
@property(nonatomic) BOOL tempHidden; // @synthesize tempHidden=_tempHidden;
@property(nonatomic) BOOL tempEditing; // @synthesize tempEditing=_tempEditing;
@property(nonatomic) struct CGRect superviewFrame; // @synthesize superviewFrame=_superviewFrame;
@property(retain, nonatomic) NSArray *captionModes; // @synthesize captionModes=_captionModes;
@property(nonatomic) int currentModeIndex; // @synthesize currentModeIndex=_currentModeIndex;
@property(retain, nonatomic) SCCaption *caption; // @synthesize caption=_caption;
@property(nonatomic) float tempLastVertical; // @synthesize tempLastVertical=_tempLastVertical;
//@property(nonatomic) __weak id <SCCaptionManagerDelegate> delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;
- (void)textChanged;
- (void)startedEditing;
- (void)stoppedEditing;
- (BOOL)canStartEditingCaption;
- (void)setInterfaceOrientation:(int)arg1;
- (struct CGRect)frame;
- (struct CGRect)imageFrame;
- (id)imageFromView;
- (void)pan:(id)arg1;
- (void)press:(id)arg1;
- (void)tap:(id)arg1;
- (void)temporarilyPutKeyboardUp:(BOOL)arg1;
- (void)startEditing;
- (void)stopEditing;
- (void)setHidden:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setAlpha:(float)arg1;
- (void)setRotating:(BOOL)arg1;
- (BOOL)captionPresent;
- (float)lastVertical;
- (int)orientation;
- (id)text;
- (BOOL)isAnimating;
- (BOOL)isFullscreen;
- (BOOL)isEditing;
- (BOOL)isHidden;
- (void)cleanUpLastMode;
- (id)viewsForCurrentCaptionMode;
- (int)currentMode;
- (void)nextMode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 captionModes:(id)arg2;

@end
