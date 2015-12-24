//
//  UIView+DLHelper.h
//  Pods
//
//  Created by Dylan on 15/12/24.
//
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, DLBadgeStyle)
{
    DLBadgeStyleRedDot = 0,
    DLBadgeStyleNumber,
    DLBadgeStyleNew
};

typedef NS_ENUM(NSUInteger, DLBadgeAnimType)
{
    DLBadgeAnimTypeNone = 0,
    DLBadgeAnimTypeScale,
    DLBadgeAnimTypeShake,
    DLBadgeAnimTypeBreathe
};

typedef void (^GestureActionBlock)(UIGestureRecognizer *gestureRecoginzer);

@interface UIView (DLHelper)

@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGFloat top;
@property (nonatomic, assign) CGFloat left;
@property (nonatomic, assign) CGFloat bottom;
@property (nonatomic, assign) CGFloat right;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGSize boundsSize;
@property (nonatomic, assign) CGFloat boundsWidth;
@property (nonatomic, assign) CGFloat boundsHeight;
@property (nonatomic, readonly) CGRect contentBounds;
@property (nonatomic, readonly) CGPoint contentCenter;

- (void)shakeView;

@property (nonatomic, strong) UILabel *badge;
@property (nonatomic, strong) UIColor *badgeBgColor;
@property (nonatomic, strong) UIColor *badgeTextColor;
@property (nonatomic, assign) CGRect badgeFrame;
@property (nonatomic, assign) DLBadgeAnimType aniType;

- (void)showDLBadge;
- (void)showDLBadgeWithStyle:(DLBadgeStyle)style value:(NSInteger)value animationType:(DLBadgeAnimType)aniType;
- (void)clearBadge;

// Moves
- (void)moveTo:(CGPoint)destination duration:(float)secs option:(UIViewAnimationOptions)option;
- (void)moveTo:(CGPoint)destination duration:(float)secs option:(UIViewAnimationOptions)option delegate:(id)delegate callback:(SEL)method;
- (void)raceTo:(CGPoint)destination withSnapBack:(BOOL)withSnapBack;
- (void)raceTo:(CGPoint)destination withSnapBack:(BOOL)withSnapBack delegate:(id)delegate callback:(SEL)method;

// Transforms
- (void)rotate:(int)degrees secs:(float)secs delegate:(id)delegate callback:(SEL)method;
- (void)scale:(float)secs x:(float)scaleX y:(float)scaleY delegate:(id)delegate callback:(SEL)method;
- (void)spinClockwise:(float)secs;
- (void)spinCounterClockwise:(float)secs;

// Transitions
- (void)curlDown:(float)secs;
- (void)curlUpAndAway:(float)secs;
- (void)drainAway:(float)secs;

// Effects
- (void)changeAlpha:(float)newAlpha secs:(float)secs;
- (void)pulse:(float)secs continuously:(BOOL)continuously;

//add subview
- (void)addSubviewWithFadeAnimation:(UIView *)subview;

- (void)addTapActionWithBlock:(GestureActionBlock)block;
- (void)addLongPressActionWithBlock:(GestureActionBlock)block;

- (UIViewController *)firstResponderViewController;

@end
