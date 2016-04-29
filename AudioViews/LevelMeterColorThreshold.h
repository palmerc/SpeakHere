


@interface LevelMeterColorThreshold : NSObject

// The LevelMeterColorThreshold struct is used to define the colors for the LevelMeter,
// and at what values each of those colors begins.
@property (assign, nonatomic) CGFloat maxValue; // A value from 0 - 1. The maximum value shown in this color
@property (retain, nonatomic) UIColor *color; // A UIColor to be used for this value range

- (instancetype)initWithMaxValue:(CGFloat)maxValue color:(UIColor *)color;

@end